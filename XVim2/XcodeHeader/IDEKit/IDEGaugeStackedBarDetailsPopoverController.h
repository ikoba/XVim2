//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTBorderedView, DVTStackView_AppKitAutolayout, NSLayoutConstraint, NSMutableArray, NSPopover;

@interface IDEGaugeStackedBarDetailsPopoverController : DVTViewController
{
    DVTBorderedView *_separator;
    NSLayoutConstraint *_bottomDetailsViewToSuperviewTopConstraint;
    NSMutableArray *_topLabelControllers;
    NSMutableArray *_bottomLabelControllers;
    BOOL _invalidateAfterClose;
    NSPopover *_popover;
    DVTStackView_AppKitAutolayout *_topDetailsView;
    DVTStackView_AppKitAutolayout *_bottomDetailsView;
}

- (void).cxx_destruct;
@property __weak DVTStackView_AppKitAutolayout *bottomDetailsView; // @synthesize bottomDetailsView=_bottomDetailsView;
@property __weak DVTStackView_AppKitAutolayout *topDetailsView; // @synthesize topDetailsView=_topDetailsView;
@property __weak NSPopover *popover; // @synthesize popover=_popover;
- (void)popoverDidClose:(id)arg1;
- (void)addLabelViewsToBottomDetailsView:(id)arg1;
- (void)addLabelViewsToTopDetailsView:(id)arg1;
- (void)hideTopDetailsView;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (void)viewDidInstall;

@end

