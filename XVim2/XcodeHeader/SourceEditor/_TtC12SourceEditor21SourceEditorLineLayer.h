//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class MISSING_TYPE, NSString;

@interface _TtC12SourceEditor21SourceEditorLineLayer : CALayer
{
    MISSING_TYPE *utf16Length;
    MISSING_TYPE *attributedString;
    MISSING_TYPE *fontRenderingAttributes;
    MISSING_TYPE *textRenderingColorSpace;
    MISSING_TYPE *contentWidth;
    MISSING_TYPE *contentHeight;
    MISSING_TYPE *lineLayoutManager;
    MISSING_TYPE *images;
    MISSING_TYPE *placeholderRanges;
    MISSING_TYPE *referencedLines;
    MISSING_TYPE *lineLayoutStrategy;
}

+ (id)defaultActionForKey:(id)arg1;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) NSString *description;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;

@end

