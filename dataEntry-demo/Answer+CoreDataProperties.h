//
//  Answer+CoreDataProperties.h
//  dataEntry-demo
//
//  Created by Angelica Bato on 5/11/16.
//  Copyright © 2016 Angelica Bato. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Answer.h"

NS_ASSUME_NONNULL_BEGIN

@interface Answer (CoreDataProperties)

@property (nonatomic) int64_t answerScore;
@property (nullable, nonatomic, retain) NSString *answerText;
@property (nullable, nonatomic, retain) Question *aToQ;
@property (nullable, nonatomic, retain) Questionnaire *answerFromQuestionnaire;

@end

NS_ASSUME_NONNULL_END
