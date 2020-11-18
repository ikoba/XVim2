//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;
@protocol IDEConsoleTextViewObjectiveCExpressionRangeDelegate, IDEConsoleTextViewStandardIODelegate;

@protocol DVTConsoleTextViewProtocol
- (void)setCompletionStrategies:(NSArray *)arg1;
- (id)textStorage;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeForUserTextChange;
- (void)themeFontsAndColorsUpdates;
- (void)repeatInput:(NSString *)arg1;
@property(nonatomic, retain) id <IDEConsoleTextViewStandardIODelegate> standardIODelegate;
- (void)appendConsoleItemsImmediatelyWithoutScrolling:(NSArray *)arg1;
- (void)appendConsoleItemsAfterDelay:(NSArray *)arg1;
- (void)clearConsoleItems;
@property(nonatomic) int logMode;

@optional
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
@property(nonatomic, retain) id <IDEConsoleTextViewObjectiveCExpressionRangeDelegate> openingBracketLocationDelegate;
@end

