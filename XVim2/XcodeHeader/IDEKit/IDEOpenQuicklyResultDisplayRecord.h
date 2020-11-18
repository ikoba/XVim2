//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTRangeArray, IDEOpenQuicklyResult, IDEWorkspace, NSArray, NSAttributedString, NSImage, NSString;

@interface IDEOpenQuicklyResultDisplayRecord : NSObject
{
    IDEWorkspace *_workspace;
    DVTRangeArray *_matchedRanges;
    NSImage *_image;
    NSString *_primaryTitle;
    NSString *_alternateTitle;
    NSAttributedString *_subtitle;
    NSString *_accessibilitySubtitle;
    NSArray *_children;
    IDEOpenQuicklyResult *_result;
    IDEOpenQuicklyResult *_parent;
}

- (void).cxx_destruct;
@property(readonly) IDEOpenQuicklyResult *parent; // @synthesize parent=_parent;
@property(readonly) IDEOpenQuicklyResult *result; // @synthesize result=_result;
@property(readonly) NSString *accessibilitySubtitle;
@property(readonly) NSAttributedString *subtitle;
@property(readonly) NSString *title;
- (id)alternateTitle;
- (id)primaryTitle;
@property(readonly) NSImage *image;
@property(readonly) NSString *alternateIndicatorTitle;
@property(readonly) NSArray *children;
@property(readonly) DVTRangeArray *matchedRanges;
- (void)updateDateForResult:(id)arg1;
- (id)initWithResult:(id)arg1 parentResult:(id)arg2 workspace:(id)arg3;

@end

