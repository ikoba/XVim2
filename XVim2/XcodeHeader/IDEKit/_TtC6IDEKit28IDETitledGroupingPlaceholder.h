//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6IDEKit28IDETitledGroupingPlaceholder : NSObject
{
    MISSING_TYPE *title;
    MISSING_TYPE *navigableItem_isMajorGroup;
    MISSING_TYPE *navigableItem_isEnabled;
    MISSING_TYPE *progress;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) BOOL navigableItem_isVisible;
@property(nonatomic) long long progress; // @synthesize progress;
@property(nonatomic) BOOL navigableItem_isEnabled; // @synthesize navigableItem_isEnabled;
@property(nonatomic) BOOL navigableItem_isMajorGroup; // @synthesize navigableItem_isMajorGroup;
@property(nonatomic, readonly) NSString *navigableItem_groupIdentifier;
@property(nonatomic, readonly) NSString *navigableItem_name;
- (id)initWithTitle:(id)arg1;
@property(nonatomic, readonly) NSString *title;

@end

