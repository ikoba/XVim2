//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDEEditorDocument;

@protocol IDESingleFileCommandSupportingEditor
@property(readonly) IDEEditorDocument *document;
- (void)compileCurrentFile;
- (BOOL)canCompileFile;
- (void)analyzeCurrentFile;
- (BOOL)canAnalyzeFile;
- (void)preprocessCurrentFile;
- (BOOL)canPreprocessFile;
- (void)assembleCurrentFile;
- (BOOL)canAssembleFile;
@end

