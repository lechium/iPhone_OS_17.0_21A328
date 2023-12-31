//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VKCamera;

__attribute__((visibility("hidden")))
@interface VKGlobeImageCanvas
{
    void *_globeView;	// 128 = 0x80
    VKCamera *_vkCamera;	// 136 = 0x88
    struct unique_ptr<md::GlobeAdapter, std::default_delete<md::GlobeAdapter>> _globeAdapter;	// 144 = 0x90
    void *_loadingStatusTracker;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x00000000009607e1
- (void).cxx_destruct;	// IMP=0x00000000009607b0
- (void)cancelTileRequests;	// IMP=0x0000000000960787
- (void)_updateViewport;	// IMP=0x0000000000960655
- (void)didLayout;	// IMP=0x00000000009605ef
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000960554
- (void)setMapType:(int)arg1;	// IMP=0x00000000009604c0
- (void)dealloc;	// IMP=0x0000000000960438
- (void)willDealloc;	// IMP=0x00000000009603db
- (id)initWithMapEngine:(void *)arg1;	// IMP=0x000000000095fee1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

