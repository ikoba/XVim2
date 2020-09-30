//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, DVTPreferenceSetManager, DVTReplacementView, NSMenuItem, NSPanel, NSPopUpButton;
@protocol DVTPreferenceSet;

@interface IDEPreferenceSetPopUpViewController : IDEViewController
{
    DVTPreferenceSetManager *_prefSetManager;
    DVTObservingToken *_availablePrefSetsObserverToken;
    DVTObservingToken *_currentPrefSetObserverToken;
    NSPopUpButton *_prefSetsPopUpButton;
    NSMenuItem *_managePrefSetsMenuItem;
    NSPanel *_managePrefSetsPanel;
    DVTReplacementView *_prefSetReplacementView;
    id <DVTPreferenceSet> _selectedPreferenceSet;
}

- (void).cxx_destruct;
@property(readonly) id <DVTPreferenceSet> selectedPreferenceSet; // @synthesize selectedPreferenceSet=_selectedPreferenceSet;
@property(readonly) NSPopUpButton *preferenceSetPopUpButton; // @synthesize preferenceSetPopUpButton=_prefSetsPopUpButton;
- (void)_dismissManagePreferenceSetsSheetAction:(id)arg1;
- (void)managePreferenceSets:(id)arg1;
- (void)_selectPreferenceSetAction:(id)arg1;
- (void)_updatePrefSetsPopUpButton;
@property(retain) DVTPreferenceSetManager *preferenceSetManager;
- (void)_endObservingPreferenceSetManager;
- (void)_beginObservingPreferenceSetManager;
- (void)_selectPreferenceSetFromPreferenceSetManager;
- (void)primitiveInvalidate;

@end

