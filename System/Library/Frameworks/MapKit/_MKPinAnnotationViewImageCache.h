//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MKPinAnnotationViewImageCache : NSObject
{
    struct _GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, std::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, geo::GEOGenericContainerWeakReferenceTag, 0UL, 0UL, geo::GEOGenericContainerLockingTag, geo::detail::_default_pointer_type> _pool;	// 8 = 0x8
    struct _GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, std::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, geo::GEOGenericContainerStrongReferenceTag, 64UL, 2097152UL, geo::GEOGenericContainerLockingTag, geo::detail::_default_pointer_type> _cache;	// 168 = 0xa8
}

- (id).cxx_construct;	// IMP=0x000000000022dc60
- (void).cxx_destruct;	// IMP=0x000000000022dbd8
- (void)flush;	// IMP=0x000000000022dae6
- (void)setPins:(id)arg1 forMapType:(unsigned long long)arg2 pinColor:(id)arg3 traits:(id)arg4;	// IMP=0x000000000022d6bb
- (id)pinsWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 traits:(id)arg3;	// IMP=0x000000000022d487
- (id)init;	// IMP=0x000000000022d250

@end

