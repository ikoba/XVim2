//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class DVTBorderedView, IDEManageCertificatesContext, IDEManageCertificatesViewController, NSImageView, NSPopUpButton, NSString;

@interface IDEManageCertificatesWindowController : NSWindowController
{
    BOOL _requestingCertificate;
    BOOL _busy;
    BOOL _addCertificatePopUpContainsItems;
    NSString *_title;
    IDEManageCertificatesContext *_context;
    IDEManageCertificatesViewController *_certsViewController;
    DVTBorderedView *_containerView;
    NSPopUpButton *_addCertificatePopUp;
    NSImageView *_warningIconView;
}

+ (id)keyPathsForValuesAffectingBusy;
+ (void)beginSheetWithContext:(id)arg1 modalForWindow:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSImageView *warningIconView; // @synthesize warningIconView=_warningIconView;
@property(retain, nonatomic) NSPopUpButton *addCertificatePopUp; // @synthesize addCertificatePopUp=_addCertificatePopUp;
@property(retain, nonatomic) DVTBorderedView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) BOOL addCertificatePopUpContainsItems; // @synthesize addCertificatePopUpContainsItems=_addCertificatePopUpContainsItems;
@property(nonatomic) BOOL busy; // @synthesize busy=_busy;
@property(nonatomic, getter=isRequestingCertificate) BOOL requestingCertificate; // @synthesize requestingCertificate=_requestingCertificate;
@property(retain, nonatomic) IDEManageCertificatesViewController *certsViewController; // @synthesize certsViewController=_certsViewController;
@property(retain, nonatomic) IDEManageCertificatesContext *context; // @synthesize context=_context;
- (void)done:(id)arg1;
- (void)createCertificate:(id)arg1;
- (void)_populateAddCertificatePopUp;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)windowDidLoad;
- (id)initWithContext:(id)arg1;
- (void)sheetDidEnd;

@end

