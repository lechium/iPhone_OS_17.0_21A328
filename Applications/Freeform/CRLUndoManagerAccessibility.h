//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CRLUndoManagerAccessibility
{
}

+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x0020000000279c12
+ (id)crlaxTargetClassName;	// IMP=0x0010000000279c05
+ (id)crlaxCastFrom:(id)arg1;	// IMP=0x0010000000279c2c
- (void)redo;	// IMP=0x0010000000279d52
- (void)undo;	// IMP=0x0010000000279cb1
@property(readonly, nonatomic) _Bool crlaxIsPerformingUndoOrRedo;
@property(nonatomic, setter=_crlaxSetPerformingUndoOrRedo:) _Bool _crlaxIsPerformingUndoOrRedo;
- (void)crlaxDidRedo;	// IMP=0x001000000012f29b
- (void)crlaxDidUndo;	// IMP=0x001000000012f25a
- (id)crlaxTarget;	// IMP=0x0010000000279c23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
