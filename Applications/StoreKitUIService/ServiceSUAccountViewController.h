//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUAccountViewController.h>

@class NSString;
@protocol ServiceAccountPageEmbeddedParent;

@interface ServiceSUAccountViewController : SUAccountViewController
{
    id <ServiceAccountPageEmbeddedParent> _embeddedParent;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000ef48
@property(nonatomic) __weak id <ServiceAccountPageEmbeddedParent> embeddedParent; // @synthesize embeddedParent=_embeddedParent;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;	// IMP=0x001000000000eefe
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ee68
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x001000000000edf5
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000000ed45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

