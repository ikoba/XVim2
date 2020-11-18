//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArrayController, NSString, NSTableView;

@interface IDESaveMultipleWindowController : NSWindowController
{
    NSArrayController *documentArrayController;
    NSTableView *tableView;
    NSString *_title;
    BOOL _hasDontSaveButton;
    BOOL _hasCancelButton;
    NSString *_cancelButtonTitle;
}

- (void).cxx_destruct;
@property(copy) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property BOOL hasCancelButton; // @synthesize hasCancelButton=_hasCancelButton;
@property BOOL hasDontSaveButton; // @synthesize hasDontSaveButton=_hasDontSaveButton;
@property(copy) NSString *title; // @synthesize title=_title;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)dontSaveAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)runWithEditorDocuments:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (id)_openWindowTerminationDisablingReason;
- (id)init;

@end

