//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTByteBuffer, NSError;

@interface DVTSimpleSerializer : NSObject
{
    DVTByteBuffer *_buffer;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)data;
- (id)error;
- (void)encodeObjectList:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeString:(id)arg1;
- (void)encodeDouble:(double)arg1;
- (void)encodeFloat:(float)arg1;
- (void)encodeInteger:(unsigned long long)arg1;
- (id)init;

@end

