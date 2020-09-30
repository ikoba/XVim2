//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTDelayedInvocation, IDEFindNavigatorScopeEditorPredicateController, IDEFindNavigatorScopeEditorRuleEditor, IDEFindNavigatorScopeEditorSourceController, IDEWorkspace, NSDate, NSTextField;
@protocol DVTInvalidation, IDEFindNavigatorScopeEditorDelegate;

@interface IDEFindNavigatorScopeEditor : IDEViewController
{
    NSTextField *_nameField;
    IDEFindNavigatorScopeEditorRuleEditor *_predicateRuleEditor;
    IDEFindNavigatorScopeEditorRuleEditor *_sourceRuleEditor;
    IDEFindNavigatorScopeEditorPredicateController *_predicateController;
    IDEFindNavigatorScopeEditorSourceController *_sourceController;
    DVTDelayedInvocation *_resizeValidator;
    id <DVTInvalidation> _ruleEditorDidChangeTokens;
    NSDate *_setNeedsDisplayUntil;
    id <IDEFindNavigatorScopeEditorDelegate> _delegate;
    IDEWorkspace *_hostWorkspace;
}

- (void).cxx_destruct;
@property(retain) IDEWorkspace *hostWorkspace; // @synthesize hostWorkspace=_hostWorkspace;
@property __weak id <IDEFindNavigatorScopeEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestResize:(id)arg1;
- (void)sizeToFitScreen:(id)arg1;
- (void)applyResizingToRuleEditor:(id)arg1 maxRows:(double)arg2;
- (void)continueForcingRuleEditorRedraw:(id)arg1;
- (double)scrollViewHeightForRuleEditor:(id)arg1 maxRows:(double)arg2 wasClipped:(char *)arg3;
- (double)scrollViewHeightForNumberOfRows:(double)arg1 inRuleEditor:(id)arg2;
- (double)scrollViewHeightForHeight:(double)arg1 ofRuleEditor:(id)arg2;
- (void)ruleEditorDidChange:(id)arg1;
- (id)displayedNamedScope;
- (void)displayNamedScope:(id)arg1;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)viewDidLoad;
- (void)primitiveInvalidate;

@end

