//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLWPMutableDirtyRangeArray
{
}

- (void)subtract:(id)arg1;	// IMP=0x004000000009aff7
- (void)addChangedRange:(struct _NSRange)arg1 delta:(long long)arg2;	// IMP=0x001000000009afe2
- (void)addChangedRange:(struct _NSRange)arg1 delta:(long long)arg2 allowEmpty:(_Bool)arg3;	// IMP=0x001000000009aca5
- (void)removeRange:(struct _NSRange)arg1;	// IMP=0x001000000009aa73
- (void)addRange:(CDStruct_9ae92562)arg1;	// IMP=0x001000000009aa5f
- (void)addRange:(CDStruct_9ae92562)arg1 allowEmpty:(_Bool)arg2;	// IMP=0x001000000009a3cb
- (void)clear;	// IMP=0x001000000009a3bd

@end

