//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, DVTFileDataType, MISSING_TYPE, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface _TtC15IDESourceEditor21CodeRollFileReference : NSObject
{
    MISSING_TYPE *codeRollURL;
    MISSING_TYPE *url;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) NSString *navigableItem_name;

@end

