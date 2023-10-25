//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryAppDocumentController
{
}

- (void)twoFactorEntryViewModel:(id)arg1 didPressButtonAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000178da
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001773b
- (_Bool)_updateTwoFactorEntryViewModel:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001676d
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000165fc
- (id)_newViewModel;	// IMP=0x00000000000165c8
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x000000000001652c
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x000000000001648a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
