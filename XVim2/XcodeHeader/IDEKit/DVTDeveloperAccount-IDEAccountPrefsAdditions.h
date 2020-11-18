//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDeveloperAccount.h>

#import <IDEKit/IDEAccountPrefsPaneAccount-Protocol.h>

@class NSImage, NSString;

@interface DVTDeveloperAccount (IDEAccountPrefsAdditions) <IDEAccountPrefsPaneAccount>
+ (id)keyPathsForValuesAffectingAccountReachability;
+ (id)keyPathsForValuesAffectingAccountTitle;
@property(readonly, nonatomic) long long accountReachability;
@property(readonly, nonatomic) BOOL accountEnabled;
@property(readonly, nonatomic) NSImage *accountImage;
@property(readonly, nonatomic) NSString *accountSubTitle;
@property(readonly, nonatomic) NSString *accountTitle;
- (void)displayInPreferences;
@end

