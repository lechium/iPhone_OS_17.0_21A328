//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUndoManager;
@protocol SBHUndoPreparation;

@protocol SBHUndoProviding
- (void)removeAllUndoRegistrationsInUndoManager:(NSUndoManager *)arg1;
- (id <SBHUndoPreparation>)prepareForUndo;
@end

