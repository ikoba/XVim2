//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSComboBox, NSString;

@protocol NSComboBoxDataSource <NSObject>

@optional
- (NSString *)comboBox:(NSComboBox *)arg1 completedString:(NSString *)arg2;
- (unsigned long long)comboBox:(NSComboBox *)arg1 indexOfItemWithStringValue:(NSString *)arg2;
- (id)comboBox:(NSComboBox *)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(NSComboBox *)arg1;
@end

