//
//  Subject+CoreDataProperties.h
//  dataEntry-demo
//
//  Created by Angelica Bato on 5/11/16.
//  Copyright © 2016 Angelica Bato. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Subject.h"

NS_ASSUME_NONNULL_BEGIN

@interface Subject (CoreDataProperties)

@property (nonatomic) int64_t gridNumber;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *subjectsQuestionnaires;

@end

@interface Subject (CoreDataGeneratedAccessors)

- (void)addSubjectsQuestionnairesObject:(NSManagedObject *)value;
- (void)removeSubjectsQuestionnairesObject:(NSManagedObject *)value;
- (void)addSubjectsQuestionnaires:(NSSet<NSManagedObject *> *)values;
- (void)removeSubjectsQuestionnaires:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
