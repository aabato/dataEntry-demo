//
//  ResponsesDataStore.h
//  dataEntry-demo
//
//  Created by Angelica Bato on 5/11/16.
//  Copyright © 2016 Angelica Bato. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Subject.h"
#import "Question.h"
#import "Answer.h"
#import "Questionnaire.h"

@interface ResponsesDataStore : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSArray *fetchedArray;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
+ (instancetype) sharedResponsesDataStore;

@end
