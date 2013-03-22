// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Shopping_AbstractRequestType.h"



/**
 
 Gets shipping costs for an item. This is one of the ways a buyer or seller
 can obtain shipping cost information for an existing item (for which the caller is
 either the buyer or seller) at any point in the life of of the listing, before or
 after a buyer has committed to purchasing the item(s). This call works for
 both flat rate shipping and calculated shipping. Flat rate shipping costs are
 established by the seller before bidding occurs. Calculated shipping costs
 are calculated by eBay with its shipping partners based on postal code, but note
 that insurance cost can only be determined once the final item price is known
 when the listing ends. To determine whether a listing has ended, use GetSingleItem.
 It is best to call GetShippingCosts only after determining via GetSingleItem
 or findItemsAdvanced (<a 
 href="http://www.developer.ebay.com/DevZone/finding/CallRef/index.html" 
 >Finding API</a>) that the item actually has shipping cost information.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_GetShippingCostsRequestType : Shopping_AbstractRequestType {

@private
    NSString *_itemID;
    NSNumber *_quantitySold;
    NSString *_destinationPostalCode;
    NSString *_destinationCountryCode;
    NSNumber *_includeDetails;

}


/**
 
 The item ID that uniquely identifies the item listing for which to retrieve the data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Number of items sold to a single buyer and to be shipped together.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantitySold;

/**
 
 Destination country postal code (or zipcode, for US). Ignored if no
 country code is provided. Optional tag for some countries. More likely to
 be required for large countries. Ignored for flat rate shipping.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *destinationPostalCode;

/**
 
 Destination country code. If DestinationCountryCode is US,
 postal code is required and represents US zip code.
 
 
 type: string constant in Shopping_CountryCodeType.h
*/
@property (nonatomic, retain) NSString *destinationCountryCode;

/**
 
 Indicates whether to return the ShippingDetails container in the response.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeDetails;


@end