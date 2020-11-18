//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class DVTTextLayer, NSAttributedString, NSImage, NSString;

@interface DVTImageAndTextLayer : CALayer
{
    double _imageToTextSpacing;
    DVTTextLayer *_textLayer;
    CALayer *_imageLayer;
    struct CGSize _imageSize;
}

+ (struct CGColor *)defaultTextShadowColor;
+ (id)defaultAttributes;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) double imageToTextSpacing; // @synthesize imageToTextSpacing=_imageToTextSpacing;
- (void)layoutSublayers;
@property(readonly) struct CGRect stringRect;
@property(readonly) struct CGRect imageRect;
@property(copy) NSString *textAlignmentMode;
@property(retain) NSImage *image;
@property(copy) NSAttributedString *attributedStringValue;
@property(copy) NSString *stringValue;
- (id)init;

@end

