//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/NSCoding-Protocol.h>
#import <DVTKit/NSCopying-Protocol.h>

@class NSArray;

@interface DVTPlistSelection : NSObject <NSCoding, NSCopying>
{
    NSArray *_keyPath;
    struct _NSRange _selectedTextRange;
    BOOL _keyIsSelected;
}

- (void).cxx_destruct;
@property(readonly) BOOL keyIsSelected; // @synthesize keyIsSelected=_keyIsSelected;
@property(readonly) struct _NSRange selectedTextRange; // @synthesize selectedTextRange=_selectedTextRange;
@property(readonly) NSArray *keyPath; // @synthesize keyPath=_keyPath;
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 selectedTextRange:(struct _NSRange)arg2 keyIsSelected:(BOOL)arg3;
- (id)initWithKeyPath:(id)arg1 keyIsSelected:(BOOL)arg2;
- (id)initWithKeyPath:(id)arg1 selectedTextRange:(struct _NSRange)arg2;
- (id)initWithKeyPath:(id)arg1;
- (long long)compareSelectionForReplacing:(id)arg1;

@end

