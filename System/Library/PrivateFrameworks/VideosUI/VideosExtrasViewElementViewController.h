//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKViewElement;

__attribute__((visibility("hidden")))
@interface VideosExtrasViewElementViewController
{
    _Bool _embedded;	// 8 = 0x8
    IKViewElement *_viewElement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b9e62
@property(nonatomic) _Bool embedded; // @synthesize embedded=_embedded;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(readonly, nonatomic) long long preferredLayoutAttribute;
@property(readonly, nonatomic) id preferredLayoutGuide;
@property(readonly, nonatomic) _Bool matchParentHeight;
- (void)viewDidLoad;	// IMP=0x00000000001b9d8c
- (id)initWithViewElement:(id)arg1;	// IMP=0x00000000001b9d1e

@end

