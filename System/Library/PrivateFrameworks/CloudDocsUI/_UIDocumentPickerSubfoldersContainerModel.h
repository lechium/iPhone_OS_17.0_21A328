//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIDocumentPickerURLContainerModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel
{
    NSString *_containerID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e1cb
- (id)scopes;	// IMP=0x000000000000e160
- (void)startMonitoringChanges;	// IMP=0x000000000000df0d
- (id)_createObserver;	// IMP=0x000000000000dea2
- (id)displayTitle;	// IMP=0x000000000000de72
- (_Bool)shouldShowTopLevelContainers;	// IMP=0x000000000000de6a
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;	// IMP=0x000000000000de53
- (id)initWithPickableTypes:(id)arg1 container:(id)arg2;	// IMP=0x000000000000ddd3

@end

