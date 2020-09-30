//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol IDEGraphDelegate, IDEGraphModelChartsModificationDelegate;

@interface IDEGraphModel : NSObject
{
    id <IDEGraphDelegate> _delegate;
    id <IDEGraphModelChartsModificationDelegate> _chartsModificationDelegate;
    NSArray *_charts;
}

- (void).cxx_destruct;
@property(retain) NSArray *charts; // @synthesize charts=_charts;
@property __weak id <IDEGraphModelChartsModificationDelegate> chartsModificationDelegate; // @synthesize chartsModificationDelegate=_chartsModificationDelegate;
@property __weak id <IDEGraphDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_chartNamed:(id)arg1;
- (id)chartNamed:(id)arg1;
- (id)init;

@end

