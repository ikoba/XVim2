//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSTextView;

@interface IDEAttributedStringControlParagraphStyleEditingProxy : NSObject
{
    NSTextView *_textView;
    long long _location;
}

- (void).cxx_destruct;
@property(copy) NSNumber *headerLevel;
@property(copy) NSNumber *tighteningFactorForTruncation;
@property(copy) NSNumber *hyphenationFactor;
@property(copy) NSNumber *defaultTabInterval;
@property(copy) NSNumber *alignment;
@property(copy) NSNumber *baseWritingDirection;
@property(copy) NSNumber *lineBreakMode;
@property(copy) NSNumber *firstLineHeadIndent;
@property(copy) NSNumber *tailIndent;
@property(copy) NSNumber *headIndent;
@property(copy) NSNumber *paragraphSpacing;
@property(copy) NSNumber *paragraphSpacingBefore;
@property(copy) NSNumber *maximumLineHeight;
@property(copy) NSNumber *minimumLineHeight;
@property(copy) NSNumber *lineSpacing;
@property(copy) NSNumber *lineHeightMultiple;
- (void)setValue:(id)arg1 forParagraphStyleKey:(id)arg2;
- (id)paragraphStyle;
- (id)textStorage;
- (id)initWithTextView:(id)arg1 andLocation:(long long)arg2;

@end

