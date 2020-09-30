//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEDistributionAssistantWindowController, IDEDistributionContext, IDEDistributionStep, NSSet, NSString;

@interface IDEDistributionStepViewController : IDEViewController
{
    BOOL _wantsNextAction;
    BOOL _wantsPreviousAction;
    BOOL _wantsCancelAction;
    BOOL _cancelled;
    IDEDistributionStep *_distributionStep;
    IDEDistributionAssistantWindowController *_assistantWindowController;
    NSString *_additionalActionTitle;
    NSString *_helpID;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(long long)arg2;
+ (Class)correspondingStepClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *helpID; // @synthesize helpID=_helpID;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly) NSString *additionalActionTitle; // @synthesize additionalActionTitle=_additionalActionTitle;
@property(readonly) BOOL wantsCancelAction; // @synthesize wantsCancelAction=_wantsCancelAction;
@property(readonly) BOOL wantsPreviousAction; // @synthesize wantsPreviousAction=_wantsPreviousAction;
@property(readonly) BOOL wantsNextAction; // @synthesize wantsNextAction=_wantsNextAction;
@property(readonly) IDEDistributionAssistantWindowController *assistantWindowController; // @synthesize assistantWindowController=_assistantWindowController;
@property(readonly) IDEDistributionStep *distributionStep; // @synthesize distributionStep=_distributionStep;
- (void)help:(id)arg1;
- (void)presentWarnings:(id)arg1;
- (void)presentErrorAndCancel:(id)arg1;
@property(readonly) NSSet *providedOutputContextPropertyNames;
@property(readonly) NSSet *requiredInputContextPropertyNames;
@property(readonly) IDEDistributionContext *context;
@property(readonly) BOOL canCancel;
- (void)takeCancelAction;
- (void)takeAdditionalAction;
- (void)takePreviousAction;
- (void)takeNextAction;
- (void)willGoNext;
@property(readonly) NSString *nextButtonTitle;
- (id)title;
@property(readonly) BOOL canPerformAdditionalAction;
@property(readonly) BOOL canGoPrevious;
@property(readonly) BOOL canGoNext;
- (void)primitiveInvalidate;
- (id)initWithContext:(id)arg1 assistantWindowController:(id)arg2;

@end

