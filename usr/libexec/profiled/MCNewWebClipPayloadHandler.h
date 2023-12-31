//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIWebClip;

@interface MCNewWebClipPayloadHandler
{
    UIWebClip *_setAsideClip;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002d88a
- (void)unsetAside;	// IMP=0x001000000002d7af
- (void)setAside;	// IMP=0x001000000002d64f
- (_Bool)isInstalled;	// IMP=0x001000000002d56b
- (void)remove;	// IMP=0x001000000002d3fa
- (id)_findInstalledClipWithIdentifier:(id)arg1;	// IMP=0x001000000002d214
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000002cbf3
- (id)savedWebClipIdentifier;	// IMP=0x001000000002cb34

@end

