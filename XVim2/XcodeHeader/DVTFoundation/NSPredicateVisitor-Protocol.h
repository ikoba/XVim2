//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSExpression, NSPredicate, NSPredicateOperator;

@protocol NSPredicateVisitor
- (void)visitPredicateOperator:(NSPredicateOperator *)arg1;
- (void)visitPredicateExpression:(NSExpression *)arg1;
- (void)visitPredicate:(NSPredicate *)arg1;
@end

