//
//  Questionnaire+CoreDataProperties.h
//  dataEntry-demo
//
//  Created by Angelica Bato on 5/11/16.
//  Copyright © 2016 Angelica Bato. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Questionnaire.h"

NS_ASSUME_NONNULL_BEGIN

@interface Questionnaire (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<Question *> *questionsInQuestionnaire;
@property (nullable, nonatomic, retain) NSSet<Answer *> *answersForQuestionnaire;
@property (nullable, nonatomic, retain) Subject *subjectFillingQuestionnaire;

@end

@interface Questionnaire (CoreDataGeneratedAccessors)

- (void)addQuestionsInQuestionnaireObject:(Question *)value;
- (void)removeQuestionsInQuestionnaireObject:(Question *)value;
- (void)addQuestionsInQuestionnaire:(NSSet<Question *> *)values;
- (void)removeQuestionsInQuestionnaire:(NSSet<Question *> *)values;

- (void)addAnswersForQuestionnaireObject:(Answer *)value;
- (void)removeAnswersForQuestionnaireObject:(Answer *)value;
- (void)addAnswersForQuestionnaire:(NSSet<Answer *> *)values;
- (void)removeAnswersForQuestionnaire:(NSSet<Answer *> *)values;

@end

NS_ASSUME_NONNULL_END
