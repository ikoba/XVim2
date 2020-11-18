//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface IDEProgressSearchSuggestionItem : NSObject
{
    NSAttributedString *_title;
    NSString *_titleFormat;
    long long _tag;
    id _representedObject;
    BOOL _isHeader;
    BOOL _isSeparatorItem;
    BOOL _isHidden;
    CDUnknownBlockType _actionBlock;
    NSString *_subtitle;
}

+ (id)headerWithTitle:(id)arg1;
+ (id)separatorItem;
- (void).cxx_destruct;
@property BOOL isHidden; // @synthesize isHidden=_isHidden;
@property BOOL isSeparatorItem; // @synthesize isSeparatorItem=_isSeparatorItem;
@property BOOL isHeader; // @synthesize isHeader=_isHeader;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property long long tag; // @synthesize tag=_tag;
@property(copy) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *titleFormat; // @synthesize titleFormat=_titleFormat;
@property(copy) NSAttributedString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitleFormat:(id)arg1;

@end

