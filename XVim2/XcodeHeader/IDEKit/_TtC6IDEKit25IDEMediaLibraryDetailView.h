//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class MISSING_TYPE, NSArray, NSImage, NSString;

@interface _TtC6IDEKit25IDEMediaLibraryDetailView : NSView
{
    MISSING_TYPE *image;
    MISSING_TYPE *title;
    MISSING_TYPE *alternateSections;
    MISSING_TYPE *titleField;
    MISSING_TYPE *separator;
    MISSING_TYPE *imageView;
    MISSING_TYPE *alternateSectionTitles;
    MISSING_TYPE *alternateTextFields;
    MISSING_TYPE *alternateImageViews;
    MISSING_TYPE *contentInset;
}

+ (double)imageHeight;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSArray *alternateSections;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, retain) NSImage *image; // @synthesize image;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

