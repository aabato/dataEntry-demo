//
//  Question+CoreDataProperties.h
//  dataEntry-demo
//
//  Created by Angelica Bato on 5/11/16.
//  Copyright © 2016 Angelica Bato. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Question.h"

NS_ASSUME_NONNULL_BEGIN

@interface Question (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *questionText;
@property (nullable, nonatomic, retain) Answer *qToA;
@property (nullable, nonatomic, retain) NSManagedObject *questionThatIsPartOfQuestionnaire;

@end

NS_ASSUME_NONNULL_END