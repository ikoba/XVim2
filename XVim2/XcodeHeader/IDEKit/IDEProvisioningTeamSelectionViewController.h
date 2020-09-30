//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, IDEProvisioningSliceConfiguration, NSButton, NSLayoutConstraint, NSPopUpButton, NSTextField;
@protocol IDESigningEditorTeamDataSource;

@interface IDEProvisioningTeamSelectionViewController : IDEViewController
{
    id <IDESigningEditorTeamDataSource> _dataSource;
    NSPopUpButton *_teamPopUpButton;
    NSButton *_addAccountButton;
    NSTextField *_teamLabel;
    NSTextField *_teamLabelLabel;
    NSLayoutConstraint *_popUpLeftPaddingConstraint;
    NSLayoutConstraint *_sliceHeightConstraint;
    NSLayoutConstraint *_popUpWidthConstraint;
    DVTObservingToken *_dataSourceTeamsObserver;
    IDEProvisioningSliceConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IDEProvisioningSliceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) DVTObservingToken *dataSourceTeamsObserver; // @synthesize dataSourceTeamsObserver=_dataSourceTeamsObserver;
@property(retain) NSLayoutConstraint *popUpWidthConstraint; // @synthesize popUpWidthConstraint=_popUpWidthConstraint;
@property(retain) NSLayoutConstraint *sliceHeightConstraint; // @synthesize sliceHeightConstraint=_sliceHeightConstraint;
@property(retain) NSLayoutConstraint *popUpLeftPaddingConstraint; // @synthesize popUpLeftPaddingConstraint=_popUpLeftPaddingConstraint;
@property __weak NSTextField *teamLabelLabel; // @synthesize teamLabelLabel=_teamLabelLabel;
@property __weak NSTextField *teamLabel; // @synthesize teamLabel=_teamLabel;
@property __weak NSButton *addAccountButton; // @synthesize addAccountButton=_addAccountButton;
@property __weak NSPopUpButton *teamPopUpButton; // @synthesize teamPopUpButton=_teamPopUpButton;
@property(retain, nonatomic) id <IDESigningEditorTeamDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)primitiveInvalidate;
- (void)startObservations;
- (void)selectionChangedForProvisoningTeamPopUpButton:(id)arg1;
- (void)updateDevelopmentTeamMenuSelection;
- (void)selectUnknownTeamItemForDisplayName:(id)arg1 showWithRedText:(BOOL)arg2;
- (void)updateDevelopmentTeams;
- (id)displayNameForTeam:(id)arg1;
- (void)showTeamAsSelectable:(BOOL)arg1 hasTeams:(BOOL)arg2;
- (void)clickedAddAccountButton:(id)arg1;
- (void)showAddAccountsSheet;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 configuration:(id)arg2;

@end

