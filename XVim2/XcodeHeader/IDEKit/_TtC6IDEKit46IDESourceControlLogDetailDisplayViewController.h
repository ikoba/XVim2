//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTBorderedView, MISSING_TYPE, NSImageView, NSLayoutConstraint, NSTextField;

@interface _TtC6IDEKit46IDESourceControlLogDetailDisplayViewController : NSViewController
{
    MISSING_TYPE *logItem;
    MISSING_TYPE *backgroundView;
    MISSING_TYPE *imageView;
    MISSING_TYPE *nameField;
    MISSING_TYPE *revisionField;
    MISSING_TYPE *dateField;
    MISSING_TYPE *messageField;
    MISSING_TYPE *backgroundViewWidthConstraint;
    MISSING_TYPE *backgroundViewHeightConstraint;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *backgroundViewHeightConstraint; // @synthesize backgroundViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *backgroundViewWidthConstraint; // @synthesize backgroundViewWidthConstraint;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField;
@property(nonatomic) __weak NSTextField *dateField; // @synthesize dateField;
@property(nonatomic) __weak NSTextField *revisionField; // @synthesize revisionField;
@property(nonatomic) __weak NSTextField *nameField; // @synthesize nameField;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView;
@property(nonatomic) __weak DVTBorderedView *backgroundView; // @synthesize backgroundView;

@end

