//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDPreviewAction.h"

__attribute__((visibility("hidden")))
@interface DDNewsPreviewAction : DDPreviewAction
{
}

+ (id)urlForURL:(id)arg1 result:(struct __DDResult *)arg2;	// IMP=0x008000000001b941
+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;	// IMP=0x008000000001b775
- (id)menuActions;	// IMP=0x000000000001b9ce
- (id)commitURL;	// IMP=0x000000000001b8b2
- (_Bool)requiresEmbeddingNavigationController;	// IMP=0x000000000001b8aa
- (id)createViewController;	// IMP=0x000000000001b7e5

@end

