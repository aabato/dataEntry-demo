//
//  ResponsesDataStore.m
//  dataEntry-demo
//
//  Created by Angelica Bato on 5/11/16.
//  Copyright © 2016 Angelica Bato. All rights reserved.
//

#import "ResponsesDataStore.h"

@implementation ResponsesDataStore
@synthesize managedObjectContext = _managedObjectContext;

#pragma mark - Singleton

+ (instancetype) sharedResponsesDataStore {
    static ResponsesDataStore *_sharedResponsesDataStore = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^ {
        _sharedResponsesDataStore = [[ResponsesDataStore alloc] init];
    });
    
    return _sharedResponsesDataStore;
}

- (void) saveContext {
    NSError *error = nil;
    NSManagedObjectContext *managedObjectContext = self.managedObjectContext;
    if (managedObjectContext) {
        if ([managedObjectContext hasChanges] && ![managedObjectContext save:&error]) {
            NSLog(@"Unresolved error %@, %@", error, [error userInfo]);
            abort();
        }
    }
}

#pragma mark - Core Data stack

// Returns the managed object context for the application.
// If the context doesn't already exist, it is created and bound to the persistent store coordinator for the application.
- (NSManagedObjectContext *)managedObjectContext
{
    if (_managedObjectContext != nil) {
        return _managedObjectContext;
    }
    
    NSURL *storeURL = [[self applicationDocumentsDirectory] URLByAppendingPathComponent:@"objcCMR.sqlite"];
    NSError *error = nil;
    
    NSURL *modelURL = [[NSBundle mainBundle] URLForResource:@"objcCMR" withExtension:@"momd"];
    NSManagedObjectModel *managedObjectModel = [[NSManagedObjectModel alloc] initWithContentsOfURL:modelURL];
    NSPersistentStoreCoordinator *coordinator = [[NSPersistentStoreCoordinator alloc] initWithManagedObjectModel:managedObjectModel];
    
    [coordinator addPersistentStoreWithType:NSSQLiteStoreType configuration:nil URL:storeURL options:nil error:&error];
    if (coordinator != nil) {
        _managedObjectContext = [[NSManagedObjectContext alloc] initWithConcurrencyType:NSPrivateQueueConcurrencyType];
        [_managedObjectContext setPersistentStoreCoordinator:coordinator];
    }
    return _managedObjectContext;
}

#pragma mark - Application's Documents directory

// Returns the URL to the application's Documents directory.
- (NSURL *)applicationDocumentsDirectory
{
    return [[[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory inDomains:NSUserDomainMask] lastObject];
}

- (void)fetchData
{
    // TODO: make an NSFetchRequest, execute and fill datastore
    NSFetchRequest *allDataInStore = [NSFetchRequest fetchRequestWithEntityName:@"Subject"];
    NSSortDescriptor *sortByName = [NSSortDescriptor sortDescriptorWithKey:@"grid" ascending:YES];
    allDataInStore.sortDescriptors = @[sortByName];
    
    self.fetchedArray = [self.managedObjectContext executeFetchRequest:allDataInStore error:nil];
}

@end
