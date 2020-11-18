//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEGroup, IDEWorkspace, IDEWorkspaceTabController, NSArray, NSString;

@interface IDESaveDestinationContext : NSObject
{
    IDEWorkspaceTabController *_workspaceTabController;
    DVTFilePath *_destinationFilePath;
    NSString *_destinationType;
    NSArray *_destinationTypes;
    IDEGroup *_destinationGroup;
    unsigned long long _destinationIndex;
    NSArray *_instantiatedItems;
}

- (void).cxx_destruct;
@property(copy) NSArray *instantiatedItems; // @synthesize instantiatedItems=_instantiatedItems;
@property unsigned long long destinationIndex; // @synthesize destinationIndex=_destinationIndex;
@property(retain) IDEGroup *destinationGroup; // @synthesize destinationGroup=_destinationGroup;
@property(copy) NSArray *destinationTypes; // @synthesize destinationTypes=_destinationTypes;
@property(copy) NSString *destinationType; // @synthesize destinationType=_destinationType;
@property(retain) DVTFilePath *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (id)workspaceWindow;
@property(readonly) IDEWorkspace *workspace;

@end

