/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionRideSharingSearchRequest : _MXExtensionObject <_MXExtensionRequestObject> {
    MKMapItem * _destination;
    MKMapItem * _origin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MKMapItem *destination;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapItem *origin;
@property (readonly) Class superclass;

+ (void)dispatchRequest:(id)arg1 toVendor:(id)arg2 completion:(id /* block */)arg3;
+ (void)load;
+ (id)serviceProtocol;
+ (BOOL)supportedByExtensionWithCapabilities:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)origin;
- (void)setDestination:(id)arg1;
- (void)setOrigin:(id)arg1;

@end
