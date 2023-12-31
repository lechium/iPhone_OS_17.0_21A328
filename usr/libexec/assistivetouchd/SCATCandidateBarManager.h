//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol SCATCandidateBarManagerDelegate;

@interface SCATCandidateBarManager
{
    id <SCATCandidateBarManagerDelegate> _delegate;	// 8 = 0x8
    NSArray *_typingCandidates;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000634f5
@property(retain, nonatomic) NSArray *typingCandidates; // @synthesize typingCandidates=_typingCandidates;
@property(nonatomic) __weak id <SCATCandidateBarManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFetchElements:(id)arg1 foundNewElements:(_Bool)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(_Bool)arg4;	// IMP=0x00100000000633bd
- (_Bool)handleInputAction:(long long)arg1 withElement:(id)arg2;	// IMP=0x0010000000063339
- (void)driver:(id)arg1 willFocusOnContext:(id)arg2;	// IMP=0x00100000000631e2
- (id)allElements;	// IMP=0x00100000000631d0
- (_Bool)canBeActiveElementManager;	// IMP=0x001000000006319d

@end

