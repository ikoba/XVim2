//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSString;

@interface IDEDebugArea : IDEViewController
{
}

+ (id)createShowRightViewButton;
+ (id)createShowLeftViewButton;
- (void)activateConsole;
- (BOOL)canActivateConsole;
- (void)reloadConsole;
- (BOOL)canReloadConsole;
- (void)clearConsole;
- (BOOL)canClearConsole;
@property(readonly) NSString *stateSavingIdentifier;
- (void)loadView;

@end

