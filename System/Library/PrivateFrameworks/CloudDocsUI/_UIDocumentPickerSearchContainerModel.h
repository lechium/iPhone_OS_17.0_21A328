//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIDocumentPickerURLContainerModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel
{
    NSString *_queryString;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000090b1
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)_updateObserverForQuery;	// IMP=0x0000000000008f46
- (void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3;	// IMP=0x0000000000008ea5
- (id)_createObserver;	// IMP=0x0000000000008dab
- (id)scopes;	// IMP=0x0000000000008d4d
- (void)startMonitoringChanges;	// IMP=0x0000000000008d0c
- (id)displayTitle;	// IMP=0x0000000000008c9d
- (_Bool)shouldShowTopLevelContainers;	// IMP=0x0000000000008c95
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;	// IMP=0x0000000000008c7d
- (id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x0000000000008c46

@end
