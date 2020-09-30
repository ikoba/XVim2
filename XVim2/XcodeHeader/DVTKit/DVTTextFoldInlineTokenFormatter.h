//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class DVTCompletingTextView, DVTTextFoldInlineTokenAttachmentCell;

@interface DVTTextFoldInlineTokenFormatter : NSFormatter
{
    DVTTextFoldInlineTokenAttachmentCell *_cell;
    DVTCompletingTextView *_textView;
    unsigned long long _charIndex;
}

- (void).cxx_destruct;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)clearContext;
- (void)setContextWithCell:(id)arg1 textView:(id)arg2 characterIndex:(unsigned long long)arg3;

@end

