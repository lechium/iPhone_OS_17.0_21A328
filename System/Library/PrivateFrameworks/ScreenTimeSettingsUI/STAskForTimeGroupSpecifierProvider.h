//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface STAskForTimeGroupSpecifierProvider
{
}

- (void)respondToRequest:(id)arg1 withApproval:(_Bool)arg2 timeApproved:(id)arg3;	// IMP=0x0000000000025022
- (void)confirmRespondToRequest:(id)arg1;	// IMP=0x0000000000024a30
- (id)requestSpecifiers;	// IMP=0x00000000000247b1
- (id)_createSpecifierForAskForMore:(id)arg1;	// IMP=0x0000000000023de6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000023ca6
- (void)setCoordinator:(id)arg1;	// IMP=0x0000000000023b9e
- (id)init;	// IMP=0x0000000000023ab7

@end

