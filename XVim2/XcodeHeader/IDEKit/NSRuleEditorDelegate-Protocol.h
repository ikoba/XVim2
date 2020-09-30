//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSDictionary, NSNotification, NSRuleEditor;

@protocol NSRuleEditorDelegate <NSObject>
- (id)ruleEditor:(NSRuleEditor *)arg1 displayValueForCriterion:(id)arg2 inRow:(long long)arg3;
- (id)ruleEditor:(NSRuleEditor *)arg1 child:(long long)arg2 forCriterion:(id)arg3 withRowType:(unsigned long long)arg4;
- (long long)ruleEditor:(NSRuleEditor *)arg1 numberOfChildrenForCriterion:(id)arg2 withRowType:(unsigned long long)arg3;

@optional
- (void)ruleEditorRowsDidChange:(NSNotification *)arg1;
- (NSDictionary *)ruleEditor:(NSRuleEditor *)arg1 predicatePartsForCriterion:(id)arg2 withDisplayValue:(id)arg3 inRow:(long long)arg4;
@end

