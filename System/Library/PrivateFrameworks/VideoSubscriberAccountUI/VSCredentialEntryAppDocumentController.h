//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VSIKItemGroupElement;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryAppDocumentController
{
    VSIKItemGroupElement *_pickerElement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002df8d
@property(retain, nonatomic) VSIKItemGroupElement *pickerElement; // @synthesize pickerElement=_pickerElement;
- (void)viewModel:(id)arg1 pickerDidSelectRow:(unsigned long long)arg2;	// IMP=0x000000000002dde9
- (void)viewModel:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2;	// IMP=0x000000000002dd08
- (void)itemGroup:(id)arg1 selectedItemIndexDidChange:(long long)arg2;	// IMP=0x000000000002dbcd
- (_Bool)_updateCredentialEntryViewModel:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002c672
- (_Bool)_updateCredentialEntryViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c567
- (id)_credentialEntryViewModelWithViewModel:(id)arg1;	// IMP=0x000000000002c4a5
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000002c284
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c131
- (id)_newViewModel;	// IMP=0x000000000002c0fd
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x000000000002bf18
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x000000000002bd29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

