//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class NSMenu, NSOpenPanel, NSPathCell;

@protocol NSPathCellDelegate <NSObject>

@optional
- (void)pathCell:(NSPathCell *)arg1 willPopUpMenu:(NSMenu *)arg2;
- (void)pathCell:(NSPathCell *)arg1 willDisplayOpenPanel:(NSOpenPanel *)arg2;
@end

