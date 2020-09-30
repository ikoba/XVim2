//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTObservingToken, IDEEditor, IDEProcessedFileAttributes, NSButton, NSPopUpButton, NSString, NSTextField;
@protocol IDESingleFileCommandSupportingEditor;

@interface IDESingleFileProcessingToolbarController : IDEViewController
{
    DVTBorderedView *_borderedView;
    NSPopUpButton *_actionPopUpButton;
    NSTextField *_actionLabel;
    NSButton *_refreshButton;
    IDEEditor<IDESingleFileCommandSupportingEditor> *_editor;
    BOOL _canRefresh;
    DVTObservingToken *_currentBuildOperationObservingToken;
    IDEProcessedFileAttributes *_attributes;
}

+ (id)keyPathsForValuesAffectingActionLabel;
+ (id)defaultViewNibName;
- (void).cxx_destruct;
@property(retain, nonatomic) IDEProcessedFileAttributes *attributes; // @synthesize attributes=_attributes;
@property BOOL canRefresh; // @synthesize canRefresh=_canRefresh;
@property(retain) IDEEditor<IDESingleFileCommandSupportingEditor> *editor; // @synthesize editor=_editor;
- (void)_updateActionPopUp;
- (BOOL)_showingAssembly;
@property(readonly) NSString *actionLabel;
- (void)selectedSchemeAction:(id)arg1;
- (void)refresh:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithEditor:(id)arg1 processedFileAttributes:(id)arg2;

@end

