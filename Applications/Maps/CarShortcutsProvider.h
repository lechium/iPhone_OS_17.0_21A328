//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsEngine, NSArray, NSString;
@protocol CarShortcutsProviderDelegate, MapsSuggestionsFilter, OS_dispatch_queue;

@interface CarShortcutsProvider : NSObject
{
    MapsSuggestionsEngine *_mapsSuggestionsEngine;	// 8 = 0x8
    id <MapsSuggestionsFilter> _myAdditionalFilter;	// 16 = 0x10
    id <MapsSuggestionsFilter> _offlineFilter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_msgQueue;	// 32 = 0x20
    _Bool _sinkAttached;	// 40 = 0x28
    NSArray *_shortcuts;	// 48 = 0x30
    id <CarShortcutsProviderDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000a1a1d3
@property(nonatomic) _Bool sinkAttached; // @synthesize sinkAttached=_sinkAttached;
@property(nonatomic) __weak id <CarShortcutsProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *shortcuts; // @synthesize shortcuts=_shortcuts;
- (void)invalidateForMapsSuggestionsManager:(id)arg1;	// IMP=0x0010000000a1a0cf
@property(readonly, nonatomic) NSString *uniqueName;
- (void)_processTopSuggestions:(id)arg1 error:(id)arg2;	// IMP=0x0010000000a19e3e
- (void)_fetchSuggestions;	// IMP=0x0010000000a19d08
- (void)_createMapsSuggestionEngineWithCallBack:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a19c18
- (void)stop;	// IMP=0x0010000000a19b5d
- (void)start;	// IMP=0x0010000000a199a9
- (id)init;	// IMP=0x0010000000a19777

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

