//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class NSButton, NSMatrix, NSTextField;

@interface IDEAddContainerItemsAssistant : IDEAssistant
{
    BOOL _canFinish;
    NSTextField *_copyFilesToTargetGroupLabel;
    NSButton *_copyFilesToTargetGroupSwitchButton;
    NSMatrix *_createGroupsForFoldersMatrix;
}

- (void).cxx_destruct;
@property BOOL canFinish; // @synthesize canFinish=_canFinish;
- (void)reallyFinishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)viewDidInstall;
- (void)loadView;

@end

